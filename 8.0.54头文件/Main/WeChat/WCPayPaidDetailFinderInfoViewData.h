@interface WCPayPaidDetailFinderInfoViewData : NSObject
{
    WCPayPaidDetailLogoViewData * _logo; // +0x8
    WCPayPaidDetailLogoViewData * _sub_logo; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    RouteInfo * _route_info; // +0x28
}
- (id)logo;
- (void)setLogo:(id)arg1;
- (id)sub_logo;
- (void)setSub_logo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)route_info;
- (void)setRoute_info:(id)arg1;
- (void).cxx_destruct;
@end

