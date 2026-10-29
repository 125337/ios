@interface MegaVideoFuncDeclareObjc : NSObject <MegaVideoFuncDeclare>
{
    id /* block */ _Void_Bool_Block; // +0x8
    id /* block */ _Void_ByteArray_Block; // +0x10
    id /* block */ _Void_Int32_Block; // +0x18
    id /* block */ _Void_Int32String_Block; // +0x20
    id /* block */ _Void_List_MegaVideoFeed_2_Block; // +0x28
    id /* block */ _Void_LongVideoFeedPrefetchResult_2_Block; // +0x30
}
+ (id)from_Void_Bool_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_Bool_Block:(id)arg1;
+ (id)from_Void_ByteArray_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_ByteArray_Block:(id)arg1;
+ (id)from_Void_Int32_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_Int32_Block:(id)arg1;
+ (id)from_Void_Int32String_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_Int32String_Block:(id)arg1;
+ (id)from_Void_List_MegaVideoFeed_2_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_List_MegaVideoFeed_2_Block:(id)arg1;
+ (id)from_Void_LongVideoFeedPrefetchResult_2_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_LongVideoFeedPrefetchResult_2_Block:(id)arg1;
- (void)Void_Bool:(BOOL)arg1;
- (void)Void_ByteArray:(id)arg1;
- (void)Void_Int32:(int)arg1;
- (void)Void_Int32String:(int)arg1 errMsg:(id)arg2;
- (void)Void_List_MegaVideoFeed_2:(id)arg1;
- (void)Void_LongVideoFeedPrefetchResult_2:(id)arg1;
- (id /* block */)Void_Bool_Block;
- (id /* block */)Void_ByteArray_Block;
- (id /* block */)Void_Int32_Block;
- (id /* block */)Void_Int32String_Block;
- (id /* block */)Void_List_MegaVideoFeed_2_Block;
- (id /* block */)Void_LongVideoFeedPrefetchResult_2_Block;
- (void).cxx_destruct;
@end

