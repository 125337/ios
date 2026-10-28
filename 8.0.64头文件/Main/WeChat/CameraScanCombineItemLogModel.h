@interface CameraScanCombineItemLogModel : NSObject
{
    unsigned long long _itemIdx; // +0x8
    NSMutableArray * _arrFrames; // +0x10
}
- (unsigned long long)itemIdx;
- (void)setItemIdx:(unsigned long long)arg1;
- (id)arrFrames;
- (void)setArrFrames:(id)arg1;
- (void).cxx_destruct;
@end
