@interface MpChooseImageResult : NSObject
{
    NSArray * _tempFiles; // +0x8
    NSString * _sourceType; // +0x10
}
+ (id)makeWithTempFiles:(id)arg1 sourceType:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tempFiles;
- (void)setTempFiles:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (void).cxx_destruct;
@end
