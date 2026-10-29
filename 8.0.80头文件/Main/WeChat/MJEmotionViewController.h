@interface MJEmotionViewController : UIViewController <EditImageEmotionToolAttrDelegate>
{
    BOOL _usesTimelineDecorationAppearance; // +0x8
    MJSegmentViewModel * _entranceSegmentVM; // +0x10
    id <MJEmotionViewControllerDelegate> _delegate; // +0x18
    id /* block */ _selectionIsValid; // +0x20
    unsigned long long _selectionGeneration; // +0x28
    EditImageEmotionToolAttrView * _emotionView; // +0x30
    MJInspectorToolBar * _toolBar; // +0x38
    MJEmoticonPickerItem * _backupItem; // +0x40
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
- (id /* block */)selectionIsValid;
- (void)setSelectionIsValid:(id /* block */)arg1;
- (BOOL)usesTimelineDecorationAppearance;
- (void)setUsesTimelineDecorationAppearance:(BOOL)arg1;
- (unsigned long long)selectionGeneration;
- (void)setSelectionGeneration:(unsigned long long)arg1;
- (void)setEmotionView:(id)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (id)backupItem;
- (void).cxx_destruct;
@end
