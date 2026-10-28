@interface WCFinderSharePreConfirmView : UIView
{
    double _coverWidth; // +0x8
    WCFinderShareCoverImageView * _coverImageView; // +0x10
    SightIconView * _playIconView; // +0x18
    MMUIButton * _memberFlagButton; // +0x20
}
- (id)init;
- (void)renderWithFinderShareItem:(id)arg1;
- (CGSize)coverSizeWithMediaItem:(id)arg1;
- (id)coverImageView;
- (id)playIconView;
- (id)memberFlagButton;
- (double)coverWidth;
- (void)setCoverWidth:(double)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setMemberFlagButton:(id)arg1;
- (void).cxx_destruct;
@end
