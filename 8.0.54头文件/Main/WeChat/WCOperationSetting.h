@interface WCOperationSetting : NSObject <NSCoding>
{
    NSMutableDictionary * dicUserBigImageClickedCount; // +0x8
    NSMutableDictionary * dicUserBigImageAddedCount; // +0x10
    BOOL needWriteBack; // +0x18
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addNewBigImageClickedCountForUser:(id)arg1 clickedCount:(unsigned long long)arg2;
- (void)addNewBigImageCountForUser:(id)arg1 addedCount:(unsigned long long)arg2;
- (id)dicUserBigImageClickedCount;
- (void)setDicUserBigImageClickedCount:(id)arg1;
- (id)dicUserBigImageAddedCount;
- (void)setDicUserBigImageAddedCount:(id)arg1;
- (BOOL)needWriteBack;
- (void)setNeedWriteBack:(BOOL)arg1;
- (void).cxx_destruct;
@end

