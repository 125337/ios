@interface QMCProcessedDataResult : NSObject
{
    BOOL _isSelected; // +0x8
    BOOL _isSkip; // +0x9
    NSDictionary * _result; // +0x10
}
- (id)initWithResult:(id)arg1 isSelected:(BOOL)arg2 isSkip:(BOOL)arg3;
- (id)result;
- (void)setResult:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isSkip;
- (void)setIsSkip:(BOOL)arg1;
- (void).cxx_destruct;
@end
