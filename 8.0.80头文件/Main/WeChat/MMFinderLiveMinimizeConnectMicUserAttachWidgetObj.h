@interface MMFinderLiveMinimizeConnectMicUserAttachWidgetObj : NSObject
{
    BOOL _forceCenteredLayoutMode; // +0x8
    NSString * _uniqueId; // +0x10
    NSString * _businessName; // +0x18
    UIImageView * _contentImageView; // +0x20
    UIView * _containerView; // +0x28
    UIView * _rootView; // +0x30
    CGPoint _normalizedCenter; // +0x38
    CGSize _normalizedSize; // +0x48
}
- (id)initWithRootView:(id)arg1;
- (void)refresh;
- (void)attachToContainerView:(id)arg1;
- (void)deAttachFromContainerView;
- (void)layoutUI;
- (id)getHeaderImageView;
- (void)createContentImageView;
- (id)getSnapshotUserInfoImage;
- (id)contentView;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)businessName;
- (void)setBusinessName:(id)arg1;
- (BOOL)forceCenteredLayoutMode;
- (void)setForceCenteredLayoutMode:(BOOL)arg1;
- (id)contentImageView;
- (void)setContentImageView:(id)arg1;
- (CGPoint)normalizedCenter;
- (void)setNormalizedCenter:(CGPoint)arg1;
- (CGSize)normalizedSize;
- (void)setNormalizedSize:(CGSize)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (void).cxx_destruct;
@end
