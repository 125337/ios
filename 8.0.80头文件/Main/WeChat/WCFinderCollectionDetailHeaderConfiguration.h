@interface WCFinderCollectionDetailHeaderConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>
{
    NSString * _title; // +0x8
    NSString * _thumbUrl; // +0x10
    NSString * _nickName; // +0x18
    WCFinderAuthInfo * _authInfo; // +0x20
    NSString * _feedCountText; // +0x28
    NSString * _updateAtText; // +0x30
    id /* block */ _didTapNickNameLabel; // +0x38
    double _containerWidth; // +0x40
    double _itemHeight; // +0x48
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)feedCountText;
- (void)setFeedCountText:(id)arg1;
- (id)updateAtText;
- (void)setUpdateAtText:(id)arg1;
- (id /* block */)didTapNickNameLabel;
- (void)setDidTapNickNameLabel:(id /* block */)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (void).cxx_destruct;
@end
