@interface FavSelectResult : NSObject
{
    NSString * _messageXML; // +0x8
    NSNumber * _favId; // +0x10
    NSNumber * _type; // +0x18
    NSArray * _datas; // +0x20
}
+ (id)makeWithMessageXML:(id)arg1 favId:(id)arg2 type:(id)arg3 datas:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)messageXML;
- (void)setMessageXML:(id)arg1;
- (id)favId;
- (void)setFavId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)datas;
- (void)setDatas:(id)arg1;
- (void).cxx_destruct;
@end
