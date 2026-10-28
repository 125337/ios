@interface OWXMusicLyricInfo : NSObject
{
    unsigned int _startTimeInMilliseconds; // +0x8
    NSString * _content; // +0x10
}
- (id)initWithStartTimeInMilliseconds:(unsigned int)arg1 content:(id)arg2;
- (unsigned int)startTimeInMilliseconds;
- (void)setStartTimeInMilliseconds:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
