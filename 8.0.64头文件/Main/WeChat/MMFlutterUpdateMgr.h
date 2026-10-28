@interface MMFlutterUpdateMgr : NSObject
+ (id)getBaseID;
+ (id)getConfigID:(id)arg1;
+ (id)getUpdateRevision:(id)arg1;
+ (BOOL)verifyFlutterUpdate:(id)arg1;
+ (id)loadFlutterUpdate:(id)arg1 baseId:(id)arg2;
@end
