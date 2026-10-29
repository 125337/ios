@interface MMLiveLikeHeaderImageView : MMLiveLikeImageView
{
    MMHeadImageView * _headImageView; // +0x10
    NSString * _identityId; // +0x18
    NSString * _headImageUrl; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutHeaderImageView;
- (void)updateIdentityId:(id)arg1 headUrl:(id)arg2;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)identityId;
- (void)setIdentityId:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

