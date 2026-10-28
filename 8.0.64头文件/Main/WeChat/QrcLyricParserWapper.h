@interface QrcLyricParserWapper : NSObject
{
    QrcLyricParser * _qrcLyricParser; // +0x8
    QrcLyricParser * _luomaQrcLyricParser; // +0x10
}
+ (id)sharedQrcLyricParserWapper;
- (id)init;
- (id)qrcLyricParser;
- (void)setQrcLyricParser:(id)arg1;
- (id)luomaQrcLyricParser;
- (void)setLuomaQrcLyricParser:(id)arg1;
- (void).cxx_destruct;
@end
