@interface BizProfileJumpInfo : NSObject
{
    NSString * _userName; // +0x8
    NSNumber * _addContactScene; // +0x10
    NSNumber * _openArticleFromScene; // +0x18
    NSNumber * _enterTarget; // +0x20
    NSString * _bizFinderExtraData; // +0x28
    NSString * _articleUrl; // +0x30
    NSNumber * _bizFromScene; // +0x38
}
+ (id)makeWithUserName:(id)arg1 addContactScene:(id)arg2 openArticleFromScene:(id)arg3 enterTarget:(id)arg4 bizFinderExtraData:(id)arg5 articleUrl:(id)arg6 bizFromScene:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)addContactScene;
- (void)setAddContactScene:(id)arg1;
- (id)openArticleFromScene;
- (void)setOpenArticleFromScene:(id)arg1;
- (id)enterTarget;
- (void)setEnterTarget:(id)arg1;
- (id)bizFinderExtraData;
- (void)setBizFinderExtraData:(id)arg1;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (id)bizFromScene;
- (void)setBizFromScene:(id)arg1;
- (void).cxx_destruct;
@end

