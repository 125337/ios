@interface FWFWKUserScriptData : NSObject
{
    BOOL _isMainFrameOnly; // +0x8
    NSString * _source; // +0x10
    FWFWKUserScriptInjectionTimeEnumData * _injectionTime; // +0x18
}
+ (id)makeWithSource:(id)arg1 injectionTime:(id)arg2 isMainFrameOnly:(BOOL)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)source;
- (void)setSource:(id)arg1;
- (id)injectionTime;
- (void)setInjectionTime:(id)arg1;
- (BOOL)isMainFrameOnly;
- (void)setIsMainFrameOnly:(BOOL)arg1;
- (void).cxx_destruct;
@end
