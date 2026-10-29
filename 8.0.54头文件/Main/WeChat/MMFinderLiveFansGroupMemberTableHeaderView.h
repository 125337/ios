@interface MMFinderLiveFansGroupMemberTableHeaderView : UIView <ILinkEventExt>
{
    BOOL _showSuperfanTip; // +0x8
    BOOL _showSuperfanWingsImage; // +0x9
    MMUILabel * _fansGroupNameLabel; // +0x10
    id /* block */ _enableSuperfanCallback; // +0x18
    MMUILabel * _fansGroupNameTipLabel; // +0x20
    RichTextView * _superfanTipLabel; // +0x28
    UIImageView * _superfanWingsImageView; // +0x30
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (double)contentTopMargin;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFansGroupNameTipLabel;
- (void)layoutFansGroupNameLabel;
- (void)layoutSuperfanTipLabel;
- (void)layoutSuperfanWingsImageView;
- (void)setShowSuperfanTip:(BOOL)arg1;
- (void)setShowSuperfanWingsImage:(BOOL)arg1;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)fansGroupNameLabel;
- (void)setFansGroupNameLabel:(id)arg1;
- (BOOL)showSuperfanTip;
- (BOOL)showSuperfanWingsImage;
- (id /* block */)enableSuperfanCallback;
- (void)setEnableSuperfanCallback:(id /* block */)arg1;
- (id)fansGroupNameTipLabel;
- (void)setFansGroupNameTipLabel:(id)arg1;
- (id)superfanTipLabel;
- (void)setSuperfanTipLabel:(id)arg1;
- (id)superfanWingsImageView;
- (void)setSuperfanWingsImageView:(id)arg1;
- (void).cxx_destruct;
@end

