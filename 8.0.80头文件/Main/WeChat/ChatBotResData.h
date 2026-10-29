@interface ChatBotResData : NSObject
{
    NSMutableDictionary * _stringMap; // +0x8
    NSMutableDictionary * _svgMap; // +0x10
    NSMutableDictionary * _imageMap; // +0x18
    NSMutableDictionary * _optionsMap; // +0x20
}
- (void)clear;
- (id)stringMap;
- (void)setStringMap:(id)arg1;
- (id)svgMap;
- (void)setSvgMap:(id)arg1;
- (id)imageMap;
- (void)setImageMap:(id)arg1;
- (id)optionsMap;
- (void)setOptionsMap:(id)arg1;
- (void).cxx_destruct;
@end
