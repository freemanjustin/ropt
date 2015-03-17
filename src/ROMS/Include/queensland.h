/*
** svn $Id: upwelling.h 429 2009-12-20 17:30:26Z arango $
*******************************************************************************
** Copyright (c) 2002-2010 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Upwelling Test.
**
** Application flag:   UPWELLING
** Input script:       ocean_upwelling.in
*/


#define UV_ADV
#define UV_COR
#define UV_VIS2
#define VISC_GRID
#undef AVERAGES
#undef AVERAGES_FLUXES
#undef DIAGNOSTICS_UV

#define MASKING
#define SPHERICAL
#define CURVGRID
#define ATM_PRESS

#define ANA_INITIAL
#define ANA_FSOBC
#define ANA_M2OBC
#define UV_QDRAG
#define STATIONS

#undef WET_DRY
#undef NETCDF4


