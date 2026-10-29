@interface TingADResult : NSObject
{
    NSNumber * _errorCode; // +0x8
}
+ (id)makeWithErrorCode:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (void).cxx_destruct;
@end
