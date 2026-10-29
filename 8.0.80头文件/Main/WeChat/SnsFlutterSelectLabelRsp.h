@interface SnsFlutterSelectLabelRsp : NSObject
{
    BOOL _result; // +0x8
    NSArray * _labelList; // +0x10
}
+ (id)makeWithResult:(BOOL)arg1 labelList:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)result;
- (void)setResult:(BOOL)arg1;
- (id)labelList;
- (void)setLabelList:(id)arg1;
- (void).cxx_destruct;
@end
