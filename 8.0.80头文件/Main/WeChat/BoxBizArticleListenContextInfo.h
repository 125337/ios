@interface BoxBizArticleListenContextInfo : NSObject
{
    NSString * _articleUrl; // +0x8
    NSString * _audioId; // +0x10
}
+ (id)makeWithArticleUrl:(id)arg1 audioId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (void).cxx_destruct;
@end
