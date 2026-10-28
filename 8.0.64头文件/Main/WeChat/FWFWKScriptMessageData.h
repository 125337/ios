@interface FWFWKScriptMessageData : NSObject
{
    NSString * _name; // +0x8
    id _body; // +0x10
}
+ (id)makeWithName:(id)arg1 body:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)name;
- (void)setName:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (void).cxx_destruct;
@end
