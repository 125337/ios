@interface WCPayOfflinePayEnablePageData : NSObject <PBCoding>
{
    unsigned int _is_need_show; // +0x8
    NSString * _icon; // +0x10
    NSString * _text; // +0x18
    NSString * _button; // +0x20
}
+ (void)PBArrayAdd_is_need_show;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_text;
+ (void)PBArrayAdd_button;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)is_need_show;
- (void)setIs_need_show:(unsigned int)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
