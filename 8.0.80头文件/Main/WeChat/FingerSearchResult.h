@interface FingerSearchResult : NSObject
{
    unsigned char _weight; // +0x8
    unsigned int _location; // +0xc
    unsigned int _chatFingerPatternType; // +0x10
    unsigned long long _type; // +0x18
    NSString * _content; // +0x20
}
- (unsigned long long)contentLength;
- (id)description;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned char)weight;
- (void)setWeight:(unsigned char)arg1;
- (unsigned int)location;
- (void)setLocation:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)chatFingerPatternType;
- (void)setChatFingerPatternType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
