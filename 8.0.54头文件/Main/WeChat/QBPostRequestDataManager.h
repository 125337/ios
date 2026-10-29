@interface QBPostRequestDataManager : NSObject
{
    NSMutableDictionary * _dicData; // +0x8
}
+ (id)sharedInstance;
+ (void)setHTTPBodyElementData:(id)arg1 forRequest:(id)arg2;
+ (void)setHTTPBodyElementStream:(id)arg1 forRequest:(id)arg2;
+ (id)appendBodyForRequest:(id)arg1 originURLString:(id *)arg2;
- (id)init;
- (void)addPostDataElement:(id)arg1 forURLString:(id)arg2 mainURLString:(id)arg3;
- (id)postDataElementForURLString:(id)arg1;
- (void)fillElement:(id)arg1 forRandomString:(long long)arg2 URLString:(id)arg3;
- (void)removeFirstDataForURLString:(id)arg1;
- (id)arrayFromContainerWithKey:(id)arg1;
- (id)arrayFromKey:(id)arg1;
- (void)removeAllPostData;
- (void).cxx_destruct;
- (id)dicData;
- (void)setDicData:(id)arg1;
@end

