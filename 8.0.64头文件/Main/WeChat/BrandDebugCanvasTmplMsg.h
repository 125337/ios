@interface BrandDebugCanvasTmplMsg : NSObject <PBCoding>
{
    unsigned int _bizType; // +0x8
    NSString * _title; // +0x10
    NSString * _content; // +0x18
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_bizType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
