@interface WCAdConversionOnlineEventModel : NSObject
{
    int _seq; // +0x8
    int _ei; // +0xc
    int _vl; // +0x10
    unsigned long long _ts; // +0x18
    WCAdConversionOnlineEventExtModel * _ext; // +0x20
    WCAdConversionOnlineEventBizModel * _biz; // +0x28
}
- (id)init;
- (int)seq;
- (void)setSeq:(int)arg1;
- (unsigned long long)ts;
- (void)setTs:(unsigned long long)arg1;
- (int)ei;
- (void)setEi:(int)arg1;
- (int)vl;
- (void)setVl:(int)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (void).cxx_destruct;
@end

