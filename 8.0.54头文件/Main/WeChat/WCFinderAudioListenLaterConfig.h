@interface WCFinderAudioListenLaterConfig : NSObject
{
    NSString * _listen_id; // +0x8
    NSString * _src_id; // +0x10
    long long _type; // +0x18
    NSString * _title; // +0x20
    NSString * _cover; // +0x28
    NSString * _author; // +0x30
    long long _duration; // +0x38
    NSString * _tid; // +0x40
    NSString * _nonce_id; // +0x48
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)listen_id;
- (void)setListen_id:(id)arg1;
- (id)src_id;
- (void)setSrc_id:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonce_id;
- (void)setNonce_id:(id)arg1;
- (void).cxx_destruct;
@end

