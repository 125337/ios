@interface WCFinderProfileMusicFullPostViewCell : UICollectionViewCell <ILinkEventExt>
{
    id <WCFinderProfileMusicFullPostViewCellDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    RichTextView * _tipsLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

