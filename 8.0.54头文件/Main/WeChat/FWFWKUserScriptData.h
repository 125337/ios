@interface FWFWKUserScriptData : NSObject
{
    NSString * _source; // +0x8
    FWFWKUserScriptInjectionTimeEnumData * _injectionTime; // +0x10
    NSNumber * _isMainFrameOnly; // +0x18
}
+ (id)makeWithSource:(id)arg1 injectionTime:(id)arg2 isMainFrameOnly:(id)arg3;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)source;
- (void)setSource:(id)arg1;
- (id)injectionTime;
- (void)setInjectionTime:(id)arg1;
- (id)isMainFrameOnly;
- (void)setIsMainFrameOnly:(id)arg1;
- (void).cxx_destruct;
@end

