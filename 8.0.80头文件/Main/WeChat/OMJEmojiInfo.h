@interface OMJEmojiInfo : NSObject
{
    NSString * _content; // +0x8
    NSString * _filePath; // +0x10
    _NSRange _rangeU16; // +0x18
}
- (id)initWithContent:(id)arg1 rangeU16:(_NSRange)arg2 filePath:(id)arg3;
- (id)description;
- (id)content;
- (_NSRange)rangeU16;
- (id)filePath;
- (void).cxx_destruct;
@end
