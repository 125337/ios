@interface MpOpenUrlRequest : NSObject
{
    NSString * _url; // +0x8
}
+ (id)makeWithUrl:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
