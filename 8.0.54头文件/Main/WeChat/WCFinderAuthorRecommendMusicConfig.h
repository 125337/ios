@interface WCFinderAuthorRecommendMusicConfig : NSObject
{
    NSString * _listen_id; // +0x8
    long long _like_state; // +0x10
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)listen_id;
- (void)setListen_id:(id)arg1;
- (long long)like_state;
- (void)setLike_state:(long long)arg1;
- (void).cxx_destruct;
@end

