@interface WCFinderDataitemSceneObj : NSObject
{
    int _scene; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
}
+ (id)objWithDataItem:(id)arg1 scene:(int)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

