@interface WCFinderLiveCompleteHelpView : UIView
{
    MMFinderLiveTask * _liveTask; // +0x8
    id /* block */ _onCreatorCenterBlock; // +0x10
    MMUIButton * _creatorCenterBtn; // +0x18
    MMUIButton * _helpEntranceBtn; // +0x20
    UIView * _sepelateLine; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)helpEntranceBtn;
- (void)helpEntranceBtnClick;
- (id)creatorCenterBtn;
- (void)creatorCenterClick;
- (id)sepelateLine;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id /* block */)onCreatorCenterBlock;
- (void)setOnCreatorCenterBlock:(id /* block */)arg1;
- (void)setCreatorCenterBtn:(id)arg1;
- (void)setHelpEntranceBtn:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end
