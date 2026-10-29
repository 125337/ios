@interface MagicBrushFileSystemRegistry : NSObject <IMBFileSystem, IMagicBrushFileSystem>
{
    id <IMBFileSystem> _mDummyFS; // +0x8
    OrderedDictionary * _mOrderedList; // +0x10
    OrderedDictionary * _mCustomOrderedList; // +0x18
    NSObject<OS_dispatch_queue> * _orderListQueue; // +0x20
}
- (id)init;
- (id)getOrderedFileSystemList;
- (id)getCustomOrderedFileSystemList;
- (void)addFStoCustomOrderedList:(id)arg1 prefix:(id)arg2;
- (id)findBizName:(id)arg1;
- (id)findType:(id)arg1;
- (id)findNonFlattenedFileSystem;
- (id)getDecodePath:(id)arg1;
- (id)precondition:(id)arg1;
- (id)findAppropriateFileSystem:(id)arg1;
- (BOOL)access:(id)arg1 error:(id *)arg2;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)unlink:(id)arg1 error:(id *)arg2;
- (BOOL)unzip:(id)arg1 targetDirectory:(id)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (BOOL)copyFile:(id)arg1 destPath:(id)arg2 error:(id *)arg3;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isAppend:(BOOL)arg3 error:(id *)arg4;
- (BOOL)mkdir:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)rmdir:(id)arg1 recursive:(BOOL)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (BOOL)accept:(id)arg1;
- (id)mDummyFS;
- (void)setMDummyFS:(id)arg1;
- (id)mOrderedList;
- (void)setMOrderedList:(id)arg1;
- (id)mCustomOrderedList;
- (void)setMCustomOrderedList:(id)arg1;
- (id)orderListQueue;
- (void)setOrderListQueue:(id)arg1;
- (void).cxx_destruct;
@end
