@interface WAMenuAboveHeaderView : UIButton
{
    UIView * _headerView; // +0x8
    MMWebImageView * _headerIconView; // +0x10
    id <IWARichTextViewHelper> _headerRichTextHelper; // +0x18
    MMUIButton * _headerRightButton; // +0x20
    MMWebImageView * _coverImageView; // +0x28
    UIImageView * _playIconView; // +0x30
    MMUILabel * _contentLabel; // +0x38
    GetProfileInfoResponse_ProfilePageInfo * _pageInfo; // +0x40
}
- (void)config:(id)arg1;
- (void)updateLayout;
- (id)headerView;
- (id)headerIconView;
- (id)headerRichTextHelper;
- (id)headerRightButton;
- (id)coverImageView;
- (id)contentLabel;
- (id)playIconView;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderIconView:(id)arg1;
- (void)setHeaderRichTextHelper:(id)arg1;
- (void)setHeaderRightButton:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (void).cxx_destruct;
@end

