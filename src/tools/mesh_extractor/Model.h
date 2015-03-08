/*
 * Copyright (C) 2013-2015 DeathCore <http://www.noffearrdeathproject.net/>
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2014 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MODEL_H
#define MODEL_H
#include <vector>
#include "Utils.h"

class Model
{
public:
    Model(std::string path);
    ~Model();

    void ReadVertices(FILE* stream);
    void ReadBoundingTriangles(FILE* stream);
    void ReadBoundingNormals(FILE* stream);
    ModelHeader Header;
    std::vector<Vector3> Vertices;
    std::vector<Vector3> Normals;
    std::vector<Triangle<uint16> > Triangles;
    bool IsCollidable;
    FILE* Stream;
    bool IsBad;
};
#endif