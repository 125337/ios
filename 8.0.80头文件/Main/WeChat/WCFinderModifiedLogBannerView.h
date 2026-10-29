@interface WCFinderModifiedLogBannerView : MMUIView <ILinkEventExt>
{
    id <WCFinderModifiedLogBannerViewDelegate> _delegate; // +0x8
    WCFinderPostModifyModel * _modifyModel; // +0x10
    RichTextView * _fromTextView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    RichTextView * _toTextView; // +0x28
    MMUIView * _deleteBtn; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 model:(id)arg2;
- (void)setUpUI;
- (id)fromTextView;
- (id)toTextView;
- (id)arrowImageView;
- (id)deleteBtn;
- (void)layoutAllSubviews;
- (void)onClickDeleteBtn;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)modifyModel;
- (void)setModifyModel:(id)arg1;
- (void)setFromTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setToTextView:(id)arg1;
- (void)setDeleteBtn:(id)arg1;
- (void).cxx_destruct;
@end
