@interface WAProfileRequestParameter : NSObject
{
    long long _scene; // +0x8
    NSString * _pagePath; // +0x10
    NSString * _sessionBuffer; // +0x18
    NSString * _recommendDishBuffer; // +0x20
}
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)recommendDishBuffer;
- (void)setRecommendDishBuffer:(id)arg1;
- (void).cxx_destruct;
@end
