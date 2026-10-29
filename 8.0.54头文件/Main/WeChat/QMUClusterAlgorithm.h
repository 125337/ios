@interface QMUClusterAlgorithm : NSObject
{
    double _distance; // +0x8
    QMapView * _map; // +0x10
    id <QMUClusterAlgorithmProtocol> _delegate; // +0x18
    QMUPointQuadTree * _tree; // +0x20
    NSMutableSet * _items; // +0x28
    NSMutableArray * _preItems; // +0x30
    NSMutableString * _preZoomlevel; // +0x38
}
- (id)initWithDateStorer:(id)arg1 originData:(id)arg2;
- (double)meterPerCGPointAtZoom:(double)arg1;
- (double)distanceBetween:(id)arg1 and:(id)arg2;
- (struct)getBound:(id)arg1;
- (void)refreshCluster;
- (id)getItemsToBeClustered;
- (id)getClusters;
- (void)resetState;
- (double)distance;
- (void)setDistance:(double)arg1;
- (id)map;
- (void)setMap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tree;
- (void)setTree:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)preItems;
- (void)setPreItems:(id)arg1;
- (id)preZoomlevel;
- (void)setPreZoomlevel:(id)arg1;
- (void).cxx_destruct;
@end

