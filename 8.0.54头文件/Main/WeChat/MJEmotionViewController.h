@interface MJEmotionViewController : UIViewController <EditImageEmotionToolAttrDelegate>
{
    MJSegmentViewModel * _entranceSegmentVM; // +0x8
    id <MJEmotionViewControllerDelegate> _delegate; // +0x10
    EditImageEmotionToolAttrView * _emotionView; // +0x18
    MJInspectorToolBar * _toolBar; // +0x20
    MJEmoticonPickerItem * _backupItem; // +0x28
}
- (void)viewDidLoad;
- (void)setupViews;
- (void)addToolBarIfNeeded;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (id)currentViewController;
- (id)emotionView;
- (BOOL)isReplacing;
- (id)entranceSegmentVM;
- (void)setEntranceSegmentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setEmotionView:(id)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (id)backupItem;
- (void).cxx_destruct;
@end

