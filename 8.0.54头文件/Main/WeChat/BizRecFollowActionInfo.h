@interface BizRecFollowActionInfo : NSObject
{
    NSString * _username; // +0x8
    long long _scene; // +0x10
    NSString * _articleUrl; // +0x18
}
+ (id)makeWithUsername:(id)arg1 scene:(long long)arg2 articleUrl:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (void).cxx_destruct;
@end

