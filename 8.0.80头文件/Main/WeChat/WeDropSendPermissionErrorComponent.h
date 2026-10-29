@interface WeDropSendPermissionErrorComponent : WeDropPassthroghView <WeDropHeaderViewComponent>
{
    WeDropPermissionCheckView * _permissionView; // +0x8
}
- (id)init;
- (void)initSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)permissionView;
- (void)setPermissionView:(id)arg1;
- (void).cxx_destruct;
@end
