@interface WCFinderPostCoverInfoView : MMUIView
{
    id <WCFinderPostCoverInfoViewProtocol> _delegate; // +0x8
    MMUIButton * _chooseCoverBtn; // +0x10
    WCFinderFeedStaticCoverView * _previewView; // +0x18
    MMUIButton * _addMediaBtn; // +0x20
    MMUIView * _deleteBtn; // +0x28
    MMUIButton * _deleteMediaButton; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
}
- (id)previewView;
- (id)chooseCoverBtn;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)deleteBtn;
- (id)addMediaBtn;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 configFlag:(unsigned long long)arg3;
- (void)layoutAllSubviews;
- (void)hiddenAllSubviews;
- (void)loadCoverByDataItem:(id)arg1 configFlag:(unsigned long long)arg2;
- (void)onClickDeleteBtn;
- (void)onClickChooseCoverBtn;
- (void)onClickPreviewAction;
- (void)onClickAddMediaBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setChooseCoverBtn:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setAddMediaBtn:(id)arg1;
- (void)setDeleteBtn:(id)arg1;
- (id)deleteMediaButton;
- (void)setDeleteMediaButton:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
