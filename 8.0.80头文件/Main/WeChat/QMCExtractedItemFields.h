@interface QMCExtractedItemFields : NSObject
{
    NSDictionary * _controller; // +0x8
    NSDictionary * _base; // +0x10
    NSDictionary * _normal; // +0x18
    NSDictionary * _selected; // +0x20
}
- (id)initWithController:(id)arg1 base:(id)arg2 normal:(id)arg3 selected:(id)arg4;
- (id)controller;
- (void)setController:(id)arg1;
- (id)base;
- (void)setBase:(id)arg1;
- (id)normal;
- (void)setNormal:(id)arg1;
- (id)selected;
- (void)setSelected:(id)arg1;
- (void).cxx_destruct;
@end
