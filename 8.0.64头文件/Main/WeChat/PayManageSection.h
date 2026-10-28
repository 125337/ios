@interface PayManageSection : NSObject
{
    NSArray * _extra_labels; // +0x8
    TextViewData * _header; // +0x10
    TextViewData * _footer; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)extra_labels;
- (void)setExtra_labels:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)footer;
- (void)setFooter:(id)arg1;
- (void).cxx_destruct;
@end
