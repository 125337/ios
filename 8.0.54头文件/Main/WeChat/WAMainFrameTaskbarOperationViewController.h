@interface WAMainFrameTaskbarOperationViewController : MMUIViewController
{
    BOOL _showing; // +0x68
    UIView * _deleteContainerView; // +0x70
    id <WAMainFrameTaskbarOperationViewControllerDelegate> _delegate; // +0x78
    long long _option; // +0x80
    WCDragDeleteBarView * _deleteBarView; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubViews;
- (void)initDeleteContainerView;
- (void)animateToShowDeleteContainerView;
- (BOOL)useBlackStatusbar;
- (void)animateToHideDeleteContainerView:(id /* block */)arg1;
- (void)setOption:(long long)arg1;
- (BOOL)isInOperationArea;
- (long long)highlightDeleteArea:(CGPoint)arg1;
- (void)unhighlightDeleteArea;
- (id)deleteContainerView;
- (void)setDeleteContainerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)option;
- (id)deleteBarView;
- (void)setDeleteBarView:(id)arg1;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

