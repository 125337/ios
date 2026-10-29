@interface WCFinderFoldCollectionViewCell : UICollectionViewCell
{
    UIView * _headBackGroundView; // +0x8
    WCFinderHeadImageView * _headerView; // +0x10
    WCFinderFeedImageCDNView * _coverView; // +0x18
    UILabel * _nickName; // +0x20
    WCFinderAuthInfoIconView * _authIconView; // +0x28
    MMUILabel * _descriLabel; // +0x30
}
+ (id)cellID;
+ (double)cellHWithShowUIDetail:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)prepareForReuse;
- (void)updateWithFinderDataItem:(id)arg1 showUIDetail:(BOOL)arg2;
- (id)coverImageView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)headBackGroundView;
- (id)headerView;
- (id)coverView;
- (id)nickName;
- (id)descriLabel;
- (id)authIconView;
- (void)setHeadBackGroundView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setDescriLabel:(id)arg1;
- (void).cxx_destruct;
@end

