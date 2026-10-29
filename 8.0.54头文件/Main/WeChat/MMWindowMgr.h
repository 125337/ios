@interface MMWindowMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_WindowMgrObjArr; // +0x8
}
- (void)showNewWindowMgrObj:(id)arg1 withAnimated:(int)arg2;
- (void)insertNewWindowMgrObj:(id)arg1;
- (BOOL)isCanInsert:(id)arg1;
- (BOOL)isExsitVCClassName:(Class)arg1;
- (BOOL)isExsitVCObj:(id)arg1;
- (BOOL)isMaxLevel:(int)arg1;
- (BOOL)shouldShowWindow:(id)arg1;
- (BOOL)isTopViewController:(id)arg1;
- (id)getWinMgrObjByVC:(id)arg1;
- (id)getMainWindow;
- (void)closeWindowWithViewController:(id)arg1 andAnimation:(int)arg2;
- (void)closeWindowWithViewController:(id)arg1 andAnimation:(int)arg2 completion:(id /* block */)arg3;
- (void)showTopWindow;
- (id)getMainSceneTopWindow;
- (id)getMainSceneTopVisibleWindow;
- (id)getTopWindow;
- (id)getVisibleTopMainSceneWindow:(Class)arg1;
- (BOOL)isContainVisibleWindowGreaterThan:(id)arg1;
- (BOOL)isContainWindowObj:(id)arg1;
- (id)getTopWindowLess:(int)arg1;
- (void)doWindowClose:(id)arg1 isTop:(BOOL)arg2 WithCompletion:(id /* block */)arg3;
- (void).cxx_destruct;
@end

