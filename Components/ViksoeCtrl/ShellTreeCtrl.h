// Copyright (C) FlatGlobus(wtlbuilder@gmail.com) All rights reserved.
//
// This file is a part of the WTLBuilder.
// The use and distribution terms for this software are covered by the
// Microsoft Public License (http://opensource.org/licenses/MS-PL)
// which can be found in the file MS-PL.txt at the root folder.

#ifndef __SHELLTREECTRL_H
#define __SHELLTREECTRL_H

#include "atlshellext.h"
#include "ShellCtrls.h"
//////////////////////////////////////////////////////////////////////////
namespace ViksoeCtrl
{
    class CShellTreeCtrlComp:public CShellTreeCtrl,public ControlComponent<CShellTreeCtrlComp>
	{
        CString path;
	public:
		CShellTreeCtrlComp(LPTSTR _name=NULL);
		~CShellTreeCtrlComp(void);

		virtual BOOL CreateComponent(Component *);

		BEGIN_MSG_MAP(CShellTreeCtrlComp)
			CHAIN_MSG_MAP(ControlComponent<CShellTreeCtrlComp>)
            CHAIN_MSG_MAP(CShellTreeCtrl)
			//REFLECT_NOTIFICATIONS_EX()
		END_MSG_MAP()

		virtual void InitProperty(void);
		///common styles
		DECLARE_WINSTYLE_BOOL_PROPERTY(NoDivider)
		DECLARE_WINSTYLE_BOOL_PROPERTY(NoMoveY)
		DECLARE_WINSTYLE_BOOL_PROPERTY(NoParentAlign)
		DECLARE_WINSTYLE_BOOL_PROPERTY(NoResize)

        DECLARE_PROPERTY(NoFolders,BOOL)      
        DECLARE_PROPERTY(NoFiles,BOOL)
        DECLARE_PROPERTY(ShowHidden,BOOL)
        DECLARE_PROPERTY(NoReadOnly,BOOL)
        DECLARE_PROPERTY(LocalComputer,BOOL)
        DECLARE_PROPERTY(FileSysytemOnly,BOOL)
        DECLARE_PROPERTY(NoRoot,BOOL)
        
        DECLARE_PROPERTY(Path,CString)
	};
}
//////////////////////////////////////////////////////////////////////////
#endif