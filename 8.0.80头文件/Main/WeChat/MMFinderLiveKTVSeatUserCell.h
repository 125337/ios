@interface MMFinderLiveKTVSeatUserCell : UICollectionViewCell
{
    MMFinderLiveKTVSeatUserView * _userView; // +0x8
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutUserView;
- (void)updateUserInfo:(id)arg1;
- (id)userView;
- (void)setUserView:(id)arg1;
- (void).cxx_destruct;
@end
