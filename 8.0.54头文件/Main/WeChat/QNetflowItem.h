@interface QNetflowItem : NSObject
{
    int _err; // +0x8
    NSString * _biz_type; // +0x10
    NSString * _url; // +0x18
    long long _rt; // +0x20
    double _up; // +0x28
    double _dw; // +0x30
    long long _up_time; // +0x38
    long long _dw_time; // +0x40
}
- (id)biz_type;
- (void)setBiz_type:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)rt;
- (void)setRt:(long long)arg1;
- (double)up;
- (void)setUp:(double)arg1;
- (double)dw;
- (void)setDw:(double)arg1;
- (long long)up_time;
- (void)setUp_time:(long long)arg1;
- (long long)dw_time;
- (void)setDw_time:(long long)arg1;
- (int)err;
- (void)setErr:(int)arg1;
- (void).cxx_destruct;
@end

