#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP rgdal2_GDALInit();
extern SEXP rgdal2_GetFieldNames(SEXP);
extern SEXP rgdal2_GetLayerFieldCount(SEXP);
extern SEXP rgdal2_RGDAL_ApplyGeoTransform(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_CleanupAll();
extern SEXP rgdal2_RGDAL_Close(SEXP);
extern SEXP rgdal2_RGDAL_CopySubset(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_CreateCopy(SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_CreateDataset(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_CreateDataSource(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DS_CreateLayer(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DS_GetLayer(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DS_GetLayerByName(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DS_GetLayerCount(SEXP);
extern SEXP rgdal2_RGDAL_DS_GetName(SEXP);
extern SEXP rgdal2_RGDAL_DS_ReleaseResultSet(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DS_TestCapability(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_DumpGeometry(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_ExecSQL(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_F_Destroy(SEXP);
extern SEXP rgdal2_RGDAL_F_GetFID(SEXP);
extern SEXP rgdal2_RGDAL_F_GetGeometryRef(SEXP);
extern SEXP rgdal2_RGDAL_G_AddGeometry(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_AddPoint_2D(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_AddPoint_3D(SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Append(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Area(SEXP);
extern SEXP rgdal2_RGDAL_G_AssignSpatialReference(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Boundary(SEXP);
extern SEXP rgdal2_RGDAL_G_Buffer(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Centroid(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Clone(SEXP);
extern SEXP rgdal2_RGDAL_G_CloseRings(SEXP);
extern SEXP rgdal2_RGDAL_G_Contains(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_ConvexHull(SEXP);
extern SEXP rgdal2_RGDAL_G_CreateGeometry(SEXP);
extern SEXP rgdal2_RGDAL_G_Crosses(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_DestroyGeometry(SEXP);
extern SEXP rgdal2_RGDAL_G_Difference(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Disjoint(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Distance(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Equals(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_ForceToMultiPolygon(SEXP);
extern SEXP rgdal2_RGDAL_G_GetCoordinateDimension(SEXP);
extern SEXP rgdal2_RGDAL_G_GetGeometryCount(SEXP);
extern SEXP rgdal2_RGDAL_G_GetGeometryRef(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_GetGeometryType(SEXP);
extern SEXP rgdal2_RGDAL_G_GetSpatialReference(SEXP);
extern SEXP rgdal2_RGDAL_G_Intersection(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Intersects(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_IsEmpty(SEXP);
extern SEXP rgdal2_RGDAL_G_IsRing(SEXP);
extern SEXP rgdal2_RGDAL_G_IsSimple(SEXP);
extern SEXP rgdal2_RGDAL_G_IsValid(SEXP);
extern SEXP rgdal2_RGDAL_G_Length(SEXP);
extern SEXP rgdal2_RGDAL_G_Overlaps(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Polygonize(SEXP);
extern SEXP rgdal2_RGDAL_G_Segmentize(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Simplify(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_SimplifyPreserveTopology(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_SymDifference(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Touches(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_TransformTo(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_Union(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_G_UnionCascaded(SEXP);
extern SEXP rgdal2_RGDAL_G_Within(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_GetBlockSize(SEXP);
extern SEXP rgdal2_RGDAL_GetDescription(SEXP);
extern SEXP rgdal2_RGDAL_GetFeature(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_GetFIDs(SEXP);
extern SEXP rgdal2_RGDAL_GetFields(SEXP);
extern SEXP rgdal2_RGDAL_GetGDALDriverName(SEXP);
extern SEXP rgdal2_RGDAL_GetGeomEnv(SEXP);
extern SEXP rgdal2_RGDAL_GetGeometries(SEXP);
extern SEXP rgdal2_RGDAL_GetGeoTransform(SEXP);
extern SEXP rgdal2_RGDAL_GetLayerEnv(SEXP);
extern SEXP rgdal2_RGDAL_GetMaskBand(SEXP);
extern SEXP rgdal2_RGDAL_GetMaskFlags(SEXP);
extern SEXP rgdal2_RGDAL_GetMetadata(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_GetOGRDriverName(SEXP);
extern SEXP rgdal2_RGDAL_GetPoints(SEXP);
extern SEXP rgdal2_RGDAL_GetPointsNested(SEXP);
extern SEXP rgdal2_RGDAL_GetPROJ4(SEXP);
extern SEXP rgdal2_RGDAL_GetProjectionRef(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterBand(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_GetRasterBandXSize(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterBandYSize(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterCount(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterExtent(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterNoDataValue(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterXSize(SEXP);
extern SEXP rgdal2_RGDAL_GetRasterYSize(SEXP);
extern SEXP rgdal2_RGDAL_GetWKT(SEXP);
extern SEXP rgdal2_RGDAL_IsGeographic(SEXP);
extern SEXP rgdal2_RGDAL_L_GetFeatureCount(SEXP);
extern SEXP rgdal2_RGDAL_L_GetFIDColumn(SEXP);
extern SEXP rgdal2_RGDAL_L_GetGeometryColumn(SEXP);
extern SEXP rgdal2_RGDAL_L_GetName(SEXP);
extern SEXP rgdal2_RGDAL_L_GetNextFeature(SEXP);
extern SEXP rgdal2_RGDAL_L_GetSpatialFilter(SEXP);
extern SEXP rgdal2_RGDAL_L_GetSpatialRef(SEXP);
extern SEXP rgdal2_RGDAL_L_ResetReading(SEXP);
extern SEXP rgdal2_RGDAL_L_SetAttributeFilter(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_L_SetSpatialFilter(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_L_TestCapability(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_MakeExtent(SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_OGROpen(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_Open(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_OSRClone(SEXP);
extern SEXP rgdal2_RGDAL_OSRNewSpatialReference(SEXP);
extern SEXP rgdal2_RGDAL_OSRRelease(SEXP);
extern SEXP rgdal2_RGDAL_OSRSetFromUserInput(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_PrintFeature(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_RasterWarp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_ReadBlock(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_ReadDataset(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_ReadRasterData(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_ReleaseDataSource(SEXP);
extern SEXP rgdal2_RGDAL_SetGeoTransform(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_SetMetadata(SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_SetProjection(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_SetRasterNoDataValue(SEXP, SEXP);
extern SEXP rgdal2_RGDAL_WriteBlock(SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDAL_writeRasterData(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_RGDALWriteRasterBand(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP rgdal2_versionInfo(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"rgdal2_GDALInit",                         (DL_FUNC) &rgdal2_GDALInit,                         0},
    {"rgdal2_GetFieldNames",                    (DL_FUNC) &rgdal2_GetFieldNames,                    1},
    {"rgdal2_GetLayerFieldCount",               (DL_FUNC) &rgdal2_GetLayerFieldCount,               1},
    {"rgdal2_RGDAL_ApplyGeoTransform",          (DL_FUNC) &rgdal2_RGDAL_ApplyGeoTransform,          3},
    {"rgdal2_RGDAL_CleanupAll",                 (DL_FUNC) &rgdal2_RGDAL_CleanupAll,                 0},
    {"rgdal2_RGDAL_Close",                      (DL_FUNC) &rgdal2_RGDAL_Close,                      1},
    {"rgdal2_RGDAL_CopySubset",                 (DL_FUNC) &rgdal2_RGDAL_CopySubset,                 5},
    {"rgdal2_RGDAL_CreateCopy",                 (DL_FUNC) &rgdal2_RGDAL_CreateCopy,                 4},
    {"rgdal2_RGDAL_CreateDataset",              (DL_FUNC) &rgdal2_RGDAL_CreateDataset,              7},
    {"rgdal2_RGDAL_CreateDataSource",           (DL_FUNC) &rgdal2_RGDAL_CreateDataSource,           3},
    {"rgdal2_RGDAL_DS_CreateLayer",             (DL_FUNC) &rgdal2_RGDAL_DS_CreateLayer,             5},
    {"rgdal2_RGDAL_DS_GetLayer",                (DL_FUNC) &rgdal2_RGDAL_DS_GetLayer,                2},
    {"rgdal2_RGDAL_DS_GetLayerByName",          (DL_FUNC) &rgdal2_RGDAL_DS_GetLayerByName,          2},
    {"rgdal2_RGDAL_DS_GetLayerCount",           (DL_FUNC) &rgdal2_RGDAL_DS_GetLayerCount,           1},
    {"rgdal2_RGDAL_DS_GetName",                 (DL_FUNC) &rgdal2_RGDAL_DS_GetName,                 1},
    {"rgdal2_RGDAL_DS_ReleaseResultSet",        (DL_FUNC) &rgdal2_RGDAL_DS_ReleaseResultSet,        2},
    {"rgdal2_RGDAL_DS_TestCapability",          (DL_FUNC) &rgdal2_RGDAL_DS_TestCapability,          2},
    {"rgdal2_RGDAL_DumpGeometry",               (DL_FUNC) &rgdal2_RGDAL_DumpGeometry,               2},
    {"rgdal2_RGDAL_ExecSQL",                    (DL_FUNC) &rgdal2_RGDAL_ExecSQL,                    2},
    {"rgdal2_RGDAL_F_Destroy",                  (DL_FUNC) &rgdal2_RGDAL_F_Destroy,                  1},
    {"rgdal2_RGDAL_F_GetFID",                   (DL_FUNC) &rgdal2_RGDAL_F_GetFID,                   1},
    {"rgdal2_RGDAL_F_GetGeometryRef",           (DL_FUNC) &rgdal2_RGDAL_F_GetGeometryRef,           1},
    {"rgdal2_RGDAL_G_AddGeometry",              (DL_FUNC) &rgdal2_RGDAL_G_AddGeometry,              2},
    {"rgdal2_RGDAL_G_AddPoint_2D",              (DL_FUNC) &rgdal2_RGDAL_G_AddPoint_2D,              3},
    {"rgdal2_RGDAL_G_AddPoint_3D",              (DL_FUNC) &rgdal2_RGDAL_G_AddPoint_3D,              4},
    {"rgdal2_RGDAL_G_Append",                   (DL_FUNC) &rgdal2_RGDAL_G_Append,                   2},
    {"rgdal2_RGDAL_G_Area",                     (DL_FUNC) &rgdal2_RGDAL_G_Area,                     1},
    {"rgdal2_RGDAL_G_AssignSpatialReference",   (DL_FUNC) &rgdal2_RGDAL_G_AssignSpatialReference,   2},
    {"rgdal2_RGDAL_G_Boundary",                 (DL_FUNC) &rgdal2_RGDAL_G_Boundary,                 1},
    {"rgdal2_RGDAL_G_Buffer",                   (DL_FUNC) &rgdal2_RGDAL_G_Buffer,                   3},
    {"rgdal2_RGDAL_G_Centroid",                 (DL_FUNC) &rgdal2_RGDAL_G_Centroid,                 2},
    {"rgdal2_RGDAL_G_Clone",                    (DL_FUNC) &rgdal2_RGDAL_G_Clone,                    1},
    {"rgdal2_RGDAL_G_CloseRings",               (DL_FUNC) &rgdal2_RGDAL_G_CloseRings,               1},
    {"rgdal2_RGDAL_G_Contains",                 (DL_FUNC) &rgdal2_RGDAL_G_Contains,                 2},
    {"rgdal2_RGDAL_G_ConvexHull",               (DL_FUNC) &rgdal2_RGDAL_G_ConvexHull,               1},
    {"rgdal2_RGDAL_G_CreateGeometry",           (DL_FUNC) &rgdal2_RGDAL_G_CreateGeometry,           1},
    {"rgdal2_RGDAL_G_Crosses",                  (DL_FUNC) &rgdal2_RGDAL_G_Crosses,                  2},
    {"rgdal2_RGDAL_G_DestroyGeometry",          (DL_FUNC) &rgdal2_RGDAL_G_DestroyGeometry,          1},
    {"rgdal2_RGDAL_G_Difference",               (DL_FUNC) &rgdal2_RGDAL_G_Difference,               2},
    {"rgdal2_RGDAL_G_Disjoint",                 (DL_FUNC) &rgdal2_RGDAL_G_Disjoint,                 2},
    {"rgdal2_RGDAL_G_Distance",                 (DL_FUNC) &rgdal2_RGDAL_G_Distance,                 2},
    {"rgdal2_RGDAL_G_Equals",                   (DL_FUNC) &rgdal2_RGDAL_G_Equals,                   2},
    {"rgdal2_RGDAL_G_ForceToMultiPolygon",      (DL_FUNC) &rgdal2_RGDAL_G_ForceToMultiPolygon,      1},
    {"rgdal2_RGDAL_G_GetCoordinateDimension",   (DL_FUNC) &rgdal2_RGDAL_G_GetCoordinateDimension,   1},
    {"rgdal2_RGDAL_G_GetGeometryCount",         (DL_FUNC) &rgdal2_RGDAL_G_GetGeometryCount,         1},
    {"rgdal2_RGDAL_G_GetGeometryRef",           (DL_FUNC) &rgdal2_RGDAL_G_GetGeometryRef,           2},
    {"rgdal2_RGDAL_G_GetGeometryType",          (DL_FUNC) &rgdal2_RGDAL_G_GetGeometryType,          1},
    {"rgdal2_RGDAL_G_GetSpatialReference",      (DL_FUNC) &rgdal2_RGDAL_G_GetSpatialReference,      1},
    {"rgdal2_RGDAL_G_Intersection",             (DL_FUNC) &rgdal2_RGDAL_G_Intersection,             2},
    {"rgdal2_RGDAL_G_Intersects",               (DL_FUNC) &rgdal2_RGDAL_G_Intersects,               2},
    {"rgdal2_RGDAL_G_IsEmpty",                  (DL_FUNC) &rgdal2_RGDAL_G_IsEmpty,                  1},
    {"rgdal2_RGDAL_G_IsRing",                   (DL_FUNC) &rgdal2_RGDAL_G_IsRing,                   1},
    {"rgdal2_RGDAL_G_IsSimple",                 (DL_FUNC) &rgdal2_RGDAL_G_IsSimple,                 1},
    {"rgdal2_RGDAL_G_IsValid",                  (DL_FUNC) &rgdal2_RGDAL_G_IsValid,                  1},
    {"rgdal2_RGDAL_G_Length",                   (DL_FUNC) &rgdal2_RGDAL_G_Length,                   1},
    {"rgdal2_RGDAL_G_Overlaps",                 (DL_FUNC) &rgdal2_RGDAL_G_Overlaps,                 2},
    {"rgdal2_RGDAL_G_Polygonize",               (DL_FUNC) &rgdal2_RGDAL_G_Polygonize,               1},
    {"rgdal2_RGDAL_G_Segmentize",               (DL_FUNC) &rgdal2_RGDAL_G_Segmentize,               2},
    {"rgdal2_RGDAL_G_Simplify",                 (DL_FUNC) &rgdal2_RGDAL_G_Simplify,                 2},
    {"rgdal2_RGDAL_G_SimplifyPreserveTopology", (DL_FUNC) &rgdal2_RGDAL_G_SimplifyPreserveTopology, 2},
    {"rgdal2_RGDAL_G_SymDifference",            (DL_FUNC) &rgdal2_RGDAL_G_SymDifference,            2},
    {"rgdal2_RGDAL_G_Touches",                  (DL_FUNC) &rgdal2_RGDAL_G_Touches,                  2},
    {"rgdal2_RGDAL_G_TransformTo",              (DL_FUNC) &rgdal2_RGDAL_G_TransformTo,              2},
    {"rgdal2_RGDAL_G_Union",                    (DL_FUNC) &rgdal2_RGDAL_G_Union,                    2},
    {"rgdal2_RGDAL_G_UnionCascaded",            (DL_FUNC) &rgdal2_RGDAL_G_UnionCascaded,            1},
    {"rgdal2_RGDAL_G_Within",                   (DL_FUNC) &rgdal2_RGDAL_G_Within,                   2},
    {"rgdal2_RGDAL_GetBlockSize",               (DL_FUNC) &rgdal2_RGDAL_GetBlockSize,               1},
    {"rgdal2_RGDAL_GetDescription",             (DL_FUNC) &rgdal2_RGDAL_GetDescription,             1},
    {"rgdal2_RGDAL_GetFeature",                 (DL_FUNC) &rgdal2_RGDAL_GetFeature,                 2},
    {"rgdal2_RGDAL_GetFIDs",                    (DL_FUNC) &rgdal2_RGDAL_GetFIDs,                    1},
    {"rgdal2_RGDAL_GetFields",                  (DL_FUNC) &rgdal2_RGDAL_GetFields,                  1},
    {"rgdal2_RGDAL_GetGDALDriverName",          (DL_FUNC) &rgdal2_RGDAL_GetGDALDriverName,          1},
    {"rgdal2_RGDAL_GetGeomEnv",                 (DL_FUNC) &rgdal2_RGDAL_GetGeomEnv,                 1},
    {"rgdal2_RGDAL_GetGeometries",              (DL_FUNC) &rgdal2_RGDAL_GetGeometries,              1},
    {"rgdal2_RGDAL_GetGeoTransform",            (DL_FUNC) &rgdal2_RGDAL_GetGeoTransform,            1},
    {"rgdal2_RGDAL_GetLayerEnv",                (DL_FUNC) &rgdal2_RGDAL_GetLayerEnv,                1},
    {"rgdal2_RGDAL_GetMaskBand",                (DL_FUNC) &rgdal2_RGDAL_GetMaskBand,                1},
    {"rgdal2_RGDAL_GetMaskFlags",               (DL_FUNC) &rgdal2_RGDAL_GetMaskFlags,               1},
    {"rgdal2_RGDAL_GetMetadata",                (DL_FUNC) &rgdal2_RGDAL_GetMetadata,                2},
    {"rgdal2_RGDAL_GetOGRDriverName",           (DL_FUNC) &rgdal2_RGDAL_GetOGRDriverName,           1},
    {"rgdal2_RGDAL_GetPoints",                  (DL_FUNC) &rgdal2_RGDAL_GetPoints,                  1},
    {"rgdal2_RGDAL_GetPointsNested",            (DL_FUNC) &rgdal2_RGDAL_GetPointsNested,            1},
    {"rgdal2_RGDAL_GetPROJ4",                   (DL_FUNC) &rgdal2_RGDAL_GetPROJ4,                   1},
    {"rgdal2_RGDAL_GetProjectionRef",           (DL_FUNC) &rgdal2_RGDAL_GetProjectionRef,           1},
    {"rgdal2_RGDAL_GetRasterBand",              (DL_FUNC) &rgdal2_RGDAL_GetRasterBand,              2},
    {"rgdal2_RGDAL_GetRasterBandXSize",         (DL_FUNC) &rgdal2_RGDAL_GetRasterBandXSize,         1},
    {"rgdal2_RGDAL_GetRasterBandYSize",         (DL_FUNC) &rgdal2_RGDAL_GetRasterBandYSize,         1},
    {"rgdal2_RGDAL_GetRasterCount",             (DL_FUNC) &rgdal2_RGDAL_GetRasterCount,             1},
    {"rgdal2_RGDAL_GetRasterExtent",            (DL_FUNC) &rgdal2_RGDAL_GetRasterExtent,            1},
    {"rgdal2_RGDAL_GetRasterNoDataValue",       (DL_FUNC) &rgdal2_RGDAL_GetRasterNoDataValue,       1},
    {"rgdal2_RGDAL_GetRasterXSize",             (DL_FUNC) &rgdal2_RGDAL_GetRasterXSize,             1},
    {"rgdal2_RGDAL_GetRasterYSize",             (DL_FUNC) &rgdal2_RGDAL_GetRasterYSize,             1},
    {"rgdal2_RGDAL_GetWKT",                     (DL_FUNC) &rgdal2_RGDAL_GetWKT,                     1},
    {"rgdal2_RGDAL_IsGeographic",               (DL_FUNC) &rgdal2_RGDAL_IsGeographic,               1},
    {"rgdal2_RGDAL_L_GetFeatureCount",          (DL_FUNC) &rgdal2_RGDAL_L_GetFeatureCount,          1},
    {"rgdal2_RGDAL_L_GetFIDColumn",             (DL_FUNC) &rgdal2_RGDAL_L_GetFIDColumn,             1},
    {"rgdal2_RGDAL_L_GetGeometryColumn",        (DL_FUNC) &rgdal2_RGDAL_L_GetGeometryColumn,        1},
    {"rgdal2_RGDAL_L_GetName",                  (DL_FUNC) &rgdal2_RGDAL_L_GetName,                  1},
    {"rgdal2_RGDAL_L_GetNextFeature",           (DL_FUNC) &rgdal2_RGDAL_L_GetNextFeature,           1},
    {"rgdal2_RGDAL_L_GetSpatialFilter",         (DL_FUNC) &rgdal2_RGDAL_L_GetSpatialFilter,         1},
    {"rgdal2_RGDAL_L_GetSpatialRef",            (DL_FUNC) &rgdal2_RGDAL_L_GetSpatialRef,            1},
    {"rgdal2_RGDAL_L_ResetReading",             (DL_FUNC) &rgdal2_RGDAL_L_ResetReading,             1},
    {"rgdal2_RGDAL_L_SetAttributeFilter",       (DL_FUNC) &rgdal2_RGDAL_L_SetAttributeFilter,       2},
    {"rgdal2_RGDAL_L_SetSpatialFilter",         (DL_FUNC) &rgdal2_RGDAL_L_SetSpatialFilter,         2},
    {"rgdal2_RGDAL_L_TestCapability",           (DL_FUNC) &rgdal2_RGDAL_L_TestCapability,           2},
    {"rgdal2_RGDAL_MakeExtent",                 (DL_FUNC) &rgdal2_RGDAL_MakeExtent,                 4},
    {"rgdal2_RGDAL_OGROpen",                    (DL_FUNC) &rgdal2_RGDAL_OGROpen,                    2},
    {"rgdal2_RGDAL_Open",                       (DL_FUNC) &rgdal2_RGDAL_Open,                       3},
    {"rgdal2_RGDAL_OSRClone",                   (DL_FUNC) &rgdal2_RGDAL_OSRClone,                   1},
    {"rgdal2_RGDAL_OSRNewSpatialReference",     (DL_FUNC) &rgdal2_RGDAL_OSRNewSpatialReference,     1},
    {"rgdal2_RGDAL_OSRRelease",                 (DL_FUNC) &rgdal2_RGDAL_OSRRelease,                 1},
    {"rgdal2_RGDAL_OSRSetFromUserInput",        (DL_FUNC) &rgdal2_RGDAL_OSRSetFromUserInput,        2},
    {"rgdal2_RGDAL_PrintFeature",               (DL_FUNC) &rgdal2_RGDAL_PrintFeature,               2},
    {"rgdal2_RGDAL_RasterWarp",                 (DL_FUNC) &rgdal2_RGDAL_RasterWarp,                 5},
    {"rgdal2_RGDAL_ReadBlock",                  (DL_FUNC) &rgdal2_RGDAL_ReadBlock,                  3},
    {"rgdal2_RGDAL_ReadDataset",                (DL_FUNC) &rgdal2_RGDAL_ReadDataset,                8},
    {"rgdal2_RGDAL_ReadRasterData",             (DL_FUNC) &rgdal2_RGDAL_ReadRasterData,             9},
    {"rgdal2_RGDAL_ReleaseDataSource",          (DL_FUNC) &rgdal2_RGDAL_ReleaseDataSource,          1},
    {"rgdal2_RGDAL_SetGeoTransform",            (DL_FUNC) &rgdal2_RGDAL_SetGeoTransform,            2},
    {"rgdal2_RGDAL_SetMetadata",                (DL_FUNC) &rgdal2_RGDAL_SetMetadata,                3},
    {"rgdal2_RGDAL_SetProjection",              (DL_FUNC) &rgdal2_RGDAL_SetProjection,              2},
    {"rgdal2_RGDAL_SetRasterNoDataValue",       (DL_FUNC) &rgdal2_RGDAL_SetRasterNoDataValue,       2},
    {"rgdal2_RGDAL_WriteBlock",                 (DL_FUNC) &rgdal2_RGDAL_WriteBlock,                 4},
    {"rgdal2_RGDAL_writeRasterData",            (DL_FUNC) &rgdal2_RGDAL_writeRasterData,            8},
    {"rgdal2_RGDALWriteRasterBand",             (DL_FUNC) &rgdal2_RGDALWriteRasterBand,             6},
    {"rgdal2_versionInfo",                      (DL_FUNC) &rgdal2_versionInfo,                      1},
    {NULL, NULL, 0}
};

void R_init_rgdal2(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
